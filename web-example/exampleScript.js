var colorHoverIdentifier = "yellow";
var colorHighlightIdentifier = "#97D17A";

var highlightedIdentifier = undefined;

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

$(".code-style identifier").click(function () {
    highlightIdentifiers($(this).text());
});

$(".code-style identifier").hover(function () {
    $(this).css("background", colorHoverIdentifier);
}, function(){
    if ($(this).text() === highlightedIdentifier)
        $(this).css("background", colorHighlightIdentifier);
    else
        $(this).css("background", "none");
});