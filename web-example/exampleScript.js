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

$(".declaration").each(function(i, v){
    $(this).parent('declaration').data('identifier', $(this).text());
});

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
            console.log($(this).text());
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
    
    $('<p class="tooltip"></p>').text(title).appendTo("body").fadeIn("slow");
}, function () {
    // Reinit background color
    if ($(this).text() === highlightedIdentifier)
        $(this).css("background", colorHighlightIdentifier);
    else
        $(this).css("background", "none");

    // Remove Tooltip
    $(".tooltip").remove();
}).mousemove(function (e) {
    // Move tooltip with mouse
    var mousex = e.pageX + 20;
    var mousey = e.pageY + 10;
    $(".tooltip").css({
        top: mousey,
        left: mousex
    });
});

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