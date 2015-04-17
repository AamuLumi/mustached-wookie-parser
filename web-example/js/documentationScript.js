var colorHoverIdentifier = "#4DC7AF";
var colorHighlightIdentifier = "#97D17A";

var highlightedIdentifier = undefined;

var lineNumber = 1;

function resetHighlightIdentifier() {
    $(".code-style identifier").each(function (i) {
        $(this).css("background", "none");
    });
}

function highlightIdentifiers(elementText) {
    resetHighlightIdentifier();

    highlightedIdentifier = elementText;

    $(".code-style identifier").each(function (i) {
        if ($(this).text() === elementText)
            $(this).css("background", colorHighlightIdentifier);
    });
}

function getLineNumbers(){
    var i = 1;
    
    $(".code-style br").each(function(){
        i++;
    });
    
    return i;
}


// DECLARATION

$(".declaration").each(function(i, v){
    $(this).parent('declaration').data('identifier', $(this).text());
});


// IDENTIFIER

$(".code-style identifier").click(function () {
    highlightIdentifiers($(this).text());
});

$(".code-style identifier").hover(function () {
    // Change background color
    $(this).css("background", colorHoverIdentifier);

    // Add Tooltip to identifier
    if ($(this).data('tipText') == undefined){
        // Search declaration if not defined
        var identifierToFind = $(this).text();
        var declaration;
        
        $("declaration").each(function(i, v){
            if ($(this).data('identifier') == identifierToFind){
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
}, function () {
    // Reinit background color
    if ($(this).text() === highlightedIdentifier)
        $(this).css("background", colorHighlightIdentifier);
    else
        $(this).css("background", "none");

    // Remove Tooltip
    $(".identifierTooltip").remove();
}).mousemove(function (e) {
    // Move tooltip with mouse
    var mousex = e.pageX + 20;
    var mousey = e.pageY + 10;
    $(".identifierTooltip").css({
        top: mousey,
        left: mousex
    });
});


// CODE EXPANDER

$(".code-expander").click(function () {
    var bloc = $(this);

    while (bloc.attr("class") != "bloc" && bloc != undefined) {
        bloc = bloc.next();
    }

    if ($(this).attr('src') == 'img/collapse.png') {
        $(this).attr('src', 'img/expand.png');
        bloc.slideUp("fast");
    } else {
        $(this).attr('src', 'img/collapse.png');
        bloc.slideDown("fast");
    }
});

// LINE NUMBER
$('.lineNumber').each(function(i, v){
    var lines = getLineNumbers();
    console.log(lines);
    for (var i = 1; i < lines; i++){
        $(this).append(i + '<br>');
    }
});