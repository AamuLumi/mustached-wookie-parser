var currentCFile = window.location.href.split('/');
var currentFolder = window.location.href.replace(currentCFile[currentCFile.length - 1], "");
currentCFile = currentCFile[currentCFile.length - 1].replace(".doc.html", "");

// Add link to source code on identifiers

$('.documentation').find('identifier').each(function (i) {
    var functionName = $(this).text();

    $(this).mousedown(function () {
        window.location.href = currentFolder + currentCFile + ".code.html#" + functionName;
    });
});
