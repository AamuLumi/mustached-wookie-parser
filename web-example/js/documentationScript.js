var colorHoverIdentifier = "#4DC7AF";
var colorHighlightIdentifier = "#97D17A";

var highlightedIdentifier = undefined;

var lineNumber = 1;

function resetHighlightIdentifier() {
    $(".code-style identifier").each(function (i) {
        $(this).css("background", "none");
    });

    highlightedIdentifier = undefined;
}

function highlightIdentifiers(elementText) {
    highlightedIdentifier = elementText;

    $(".code-style identifier").each(function (i) {
        if ($(this).text() === elementText)
            $(this).css("background", colorHighlightIdentifier);
    });
}

function numberOfBr(tag) {
    return tag.find('br').length;
}

function addLineNumbers(element) {
    var line = 1;
    var endArray = [];

    $(".code-style *").each(function () {
        if ($(this).get(0).tagName === "BR") {
            // Check if this line is an end of bloc
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
        } else if ($(this).attr('class') === "bloc") {
            // Add bloc if is a bloc
            var el = $("<bloc>").data("beginning", $(this).data("beginning")).appendTo(element);
            endArray.push($(this).data("end"));

            // Go to new element
            element = el;
        }
    });
}


// DECLARATION

$(".declaration").each(function (i, v) {
    $(this).parent('declaration').data('identifier', $(this).text());
});


// IDENTIFIER

$(".code-style identifier").click(function goToDefinition(){
    var currentIndentifier = $(this).text();
    $(".declaration").each(function(){
        if ($(this).text() === currentIndentifier){
            $('html,body').animate({scrollTop: $(this).offset().top}, 'medium');
            return false;
        }
    });
});

$(".code-style identifier").hover(function highlightAndTooltip() {
    highlightIdentifiers($(this).text());

    // Add Tooltip to identifier
    if ($(this).data('tipText') == undefined) {
        // Search declaration if not defined
        var identifierToFind = $(this).text();
        var declaration;

        $("declaration").each(function (i, v) {
            if ($(this).data('identifier') == identifierToFind) {
                declaration = $(this).text();
                return false;
            }
        });

        if (declaration == undefined)
            $(this).data('tipText', "Not found");
        else
            $(this).data('tipText', declaration);
    }

    var title = $(this).data('tipText');

    $('<p class="identifierTooltip"></p>').text(title).appendTo("body").fadeIn("slow");
}, function removeHighlightAndTooltip() {

    resetHighlightIdentifier();
    // Reinit background color
    if ($(this).text() === highlightedIdentifier)
        $(this).css("background", colorHighlightIdentifier);
    else
        $(this).css("background", "none");

    // Remove Tooltip
    $(".identifierTooltip").remove();
}).mousemove(function moveTooltip(e) {
    // Move tooltip with mouse
    var mousex = e.pageX + 20;
    var mousey = e.pageY + 10;
    $(".identifierTooltip").css({
        top: mousey,
        left: mousex
    });
});


// CODE EXPANDER

$(".code-style *").each(function () {
    if ($(this).get(0).tagName === "BR")
        lineNumber++;
    if ($(this).attr("class") === "bloc") {
        var endLineOfBloc = lineNumber + numberOfBr($(this));

        $(this).data('beginning', lineNumber);
        $(this).data('end', endLineOfBloc);
    }

});

$(".code-expander").click(function () {
    var bloc = $(this);

    while (bloc.attr("class") != "bloc" && bloc != undefined) {
        bloc = bloc.next();
    }

    if ($(this).attr('src') == 'img/collapse.png') {
        $(this).attr('src', 'img/expand.png');
        bloc.slideUp("fast");
        $(".lineNumber bloc").each(function () {
            if ($(this).data('beginning') == bloc.data('beginning'))
                $(this).slideUp('fast');
        });
    } else {
        $(this).attr('src', 'img/collapse.png');
        bloc.slideDown("fast");
        $(".lineNumber bloc").each(function () {
            if ($(this).data('beginning') == bloc.data('beginning')) {
                $(this).slideDown('fast', function () {
                    $(this).css('display', 'inline');
                });

            }
        });
    }
});

// LINE NUMBER
$('.lineNumber').each(function (i, v) {
    addLineNumbers($(this));
});