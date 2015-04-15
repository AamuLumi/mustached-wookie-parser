var colorHoverFunction = "yellow";
var colorHoverVariable = "yellow";
var colorHighlightFunction = "#97D17A";
var colorHighlightVariable = "#FFCE74";

var highlightedFunction = undefined;
var highlightedVariable = undefined;

function resetVariableHighlight() {
    $(".code-style var").each(function (i) {
        $(this).css("background", "none");
    });
}

function resetFunctionHighlight() {
    $(".code-style function").each(function (i) {
        $(this).css("background", "none");
    });
}

function highlightFunctions(elementText) {
    resetFunctionHighlight();
    
    highlightedFunction = elementText;
    
    $(".code-style function").each(function (i) {
        if ($(this).text() === elementText)
            $(this).css("background", colorHighlightFunction);
    });
}

function highlightVariables(elementText) {
    resetVariableHighlight();
    
    highlightedVariable = elementText;
    
    $(".code-style var").each(function (i) {
        if ($(this).text() === elementText)
            $(this).css("background", colorHighlightVariable);
    });
}

$(".code-style function").click(function () {
    highlightFunctions($(this).text());
});

$(".code-style function").hover(function () {
    $(this).css("background", colorHoverFunction);
}, function(){
    if ($(this).text() === highlightedFunction)
        $(this).css("background", colorHighlightFunction);
    else
        $(this).css("background", "none");
});

$(".code-style var").click(function () {
    highlightVariables($(this).text());
});

$(".code-style var").hover(function () {
    $(this).css("background", colorHoverVariable);
}, function(){
    if ($(this).text() === highlightedVariable)
        $(this).css("background", colorHighlightVariable);
    else
        $(this).css("background", "none");
});