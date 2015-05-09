var currentCFile = window.location.href.split('/');
var currentFolder = window.location.href.replace(currentCFile[currentCFile.length - 1], "");
currentCFile = currentCFile[currentCFile.length - 1].replace(".doc.html", "");

// Add link to source code on identifiers in doc-function

$('.documentation').find('.doc-function identifier').each(function (i) {
    var functionName = $(this).text();

    $(this).mousedown(function () {
        window.location.href = currentFolder + currentCFile + ".code.html#" + functionName;
    });
});

// Add link to source code on identifiers in doc-variable

$('.documentation').find('.doc-variable identifier').each(function (i) {
    var functionName = $(this).text();

    $(this).mousedown(function () {
        window.location.href = currentFolder + currentCFile + ".code.html#" + functionName;
    });
});

// Add link to good function in the page for summary

$('.documentation').find('.doc-summary identifier').each(function (i) {
    var functionName = $(this).text();

    $(this).mousedown(function () {
        window.location.href = currentFolder + currentCFile + ".doc.html#" + functionName;
    });
});
