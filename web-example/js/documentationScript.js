var colorHoverIdentifier = "#4DC7AF";
var colorHighlightIdentifier = "#97D17A";

var tooltipOffsetX = 20;
var tooltipOffsetY = 10;

var highlightedIdentifier = undefined;

var lineNumber = 1;

/**
 * Reset all highlights
 */
function resetHighlightIdentifier() {
    $(".code-style identifier").each(function removeHighlight(i) {
        $(this).css("background", "none");
    });

    highlightedIdentifier = undefined;
}


/**
 * Highlight a specific identifier
 */
function highlightIdentifiers(elementText) {
    highlightedIdentifier = elementText;

    $(".code-style identifier").each(function (i) {
        if ($(this).text() === elementText)
            $(this).css("background", colorHighlightIdentifier);
    });
}

/**
 * Count the number of <br> in the given tag
 */
function numberOfBr(tag) {
    return tag.find('br').length;
}

/**
 * Create line numbers element with a code-style element
 */
function addLineNumbers(element) {
    var line = 1;
    var endArray = [];

    $(".code-style *").each(function () {
        if ($(this).get(0).tagName === "BR") {
            // Check if this line is an end of block
            for (var i = 0; i < endArray.length; i++) {
                if (endArray[i] == line) {
                    endArray.splice(i, 1);
                    element = element.parent();
                    // One element removed -> need to decremente iterator
                    i -= 1;
                }
            }

            element.append(line + "<br>");
            line++;
        } else if ($(this).attr('class') === "block") {
            // Add block if is a block
            var el = $("<block>").data("beginning", $(this).data("beginning")).appendTo(element);
            endArray.push($(this).data("end"));

            // Go to new element
            element = el;
        }
    });
}
/**
* Search declaration of an identifier
*/
function getDeclarationFor(identifierToFind) {
    var declaration = undefined;

    $("declaration").each(function (i, v) {
        if ($(this).data('identifier') == identifierToFind) {
            declaration = $(this).text();
            return false;
        }
    });

    return declaration;
}

// ALL ELEMENTS OF CODE-STYLE

$(".code-style *").each(function analyzeHTMLDocument() {
    // Count number of br in document
    if ($(this).get(0).tagName === "BR")
        lineNumber++;
    // If is a block, add beginning line and end line to properties
    if ($(this).attr("class") === "block") {
        var endLineOfBlock = lineNumber + numberOfBr($(this));

        $(this).data('beginning', lineNumber);
        $(this).data('end', endLineOfBlock);
    }
});


// DECLARATION //

// Add identifier name to each <declaration></declaration>
$(".declaration").each(function addIdentifierToDeclaration(i, v) {
    $(this).parent('declaration').data('identifier', $(this).text());
});


// IDENTIFIER

// OnClick : go to declaration of identifier
$(".code-style identifier").click(function goToDefinition() {
    var currentIndentifier = $(this).text();

    $(".declaration").each(function searchDeclaration() {
        if ($(this).text() === currentIndentifier) {
            // Move to identifier
            $('html,body').animate({
                scrollTop: $(this).offset().top
            }, 'medium');
            return false;
        }
    });
});

// OnHover : highlight all identifiers with a name
$(".code-style identifier").hover(
    function highlightAndTooltip() {
        // Highlight identifiers
        highlightIdentifiers($(this).text());

        // Search declaration if not defined
        if ($(this).data('tipText') == undefined) {
            var declaration = getDeclarationFor($(this).text());

            if (declaration == undefined)
                $(this).data('tipText', "Not found");
            else
                $(this).data('tipText', declaration);
        }

        var title = $(this).data('tipText');

        // Add tooltip to document
        $('<p class="identifierTooltip"></p>').text(title).appendTo("body").fadeIn("slow");
    },
    function removeHighlightAndTooltip() {
        // Remove all highlights
        resetHighlightIdentifier();

        // Remove Tooltip
        $(".identifierTooltip").remove();
    })

// OnMouseMove : Move the tooltip
$(".code-style identifier").mousemove(
    function moveTooltip(e) {
        // Determinate new coordonates
        var mousex = e.pageX + tooltipOffsetX;
        var mousey = e.pageY + tooltipOffsetY;

        $(".identifierTooltip").css({
            top: mousey,
            left: mousex
        });
    });


// CODE EXPANDER

// OnClick : collapse/expand next block
$(".code-expander").click(function activeCodeExpander() {
    var block = $(this);

    // Search next block
    while (block.attr("class") != "block" && block != undefined) {
        block = block.next();
    }

    // If block is expanded -> Collapse
    if ($(this).attr('src') == 'img/collapse.png') {
        $(this).attr('src', 'img/expand.png');
        block.slideUp("fast");

        // Collapse blocks in lineNumbers
        $(".lineNumber block").each(function collapseWithBeginning() {
            if ($(this).data('beginning') == block.data('beginning'))
                $(this).slideUp('fast');
        });
    } else { // Block collapsed -> Expand
        $(this).attr('src', 'img/collapse.png');
        block.slideDown("fast");

        // Expand blocks in lineNumbers
        $(".lineNumber block").each(function expandWithBeginning() {
            if ($(this).data('beginning') == block.data('beginning')) {
                $(this).slideDown('fast', function checkDisplay() {
                    $(this).css('display', 'inline');
                });
            }
        });
    }
});

// LINE NUMBER

// Add line numbers to HTML Document
$('.lineNumber').each(function addLineNumbersToDocument() {
    addLineNumbers($(this));
});