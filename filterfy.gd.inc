<?php
// filters: https://github.com/marchibbins/GD-Filter-testing/blob/master/process.php

function filterfy_gd_blackwhite(stdClass $image, $data) {

	imagefilter($image->resource, IMG_FILTER_GRAYSCALE);
	imagefilter($image->resource, IMG_FILTER_BRIGHTNESS, 10);
	imagefilter($image->resource, IMG_FILTER_CONTRAST, -20);

    return TRUE;
}

function filterfy_gd_dreamy(stdClass $image, $data) {

	imagefilter($image->resource, IMG_FILTER_BRIGHTNESS, 20);
	imagefilter($image->resource, IMG_FILTER_CONTRAST, -35);
	imagefilter($image->resource, IMG_FILTER_COLORIZE, 60, -10, 35);
	imagefilter($image->resource, IMG_FILTER_SMOOTH, 7);

    return TRUE;
}