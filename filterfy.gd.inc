<?php

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

function filterfy_gd_bluevelvet(stdClass $image, $data) {

	imagefilter($image->resource, IMG_FILTER_BRIGHTNESS, 5);
	imagefilter($image->resource, IMG_FILTER_CONTRAST, -25);
	imagefilter($image->resource, IMG_FILTER_COLORIZE, -10, 45, 65);

    return TRUE;
}

function filterfy_gd_chrome(stdClass $image, $data) {

	imagefilter($image->resource, IMG_FILTER_BRIGHTNESS, 5);
	imagefilter($image->resource, IMG_FILTER_CONTRAST, -25);
	imagefilter($image->resource, IMG_FILTER_COLORIZE, -10, 45, 65);

    return TRUE;
}

function filterfy_gd_lift(stdClass $image, $data) {

	imagefilter($image->resource, IMG_FILTER_BRIGHTNESS, 50);
	imagefilter($image->resource, IMG_FILTER_CONTRAST, -25);
	imagefilter($image->resource, IMG_FILTER_COLORIZE, 75, 0, 25);

    return TRUE;
}

function filterfy_gd_canvas(stdClass $image, $data) {

	imagefilter($image->resource, IMG_FILTER_BRIGHTNESS, 25);
	imagefilter($image->resource, IMG_FILTER_CONTRAST, -25);
	imagefilter($image->resource, IMG_FILTER_COLORIZE, 50, 25, -35);

    return TRUE;
}

function filterfy_gd_vintage(stdClass $image, $data) {

	imagefilter($image->resource, IMG_FILTER_BRIGHTNESS, 15);
	imagefilter($image->resource, IMG_FILTER_CONTRAST, -25);
	imagefilter($image->resource, IMG_FILTER_COLORIZE, -10, -5, -15);
	imagefilter($image->resource, IMG_FILTER_SMOOTH, 7);

    return TRUE;
}

function filterfy_gd_monopin(stdClass $image, $data) {

	imagefilter($image->resource, IMG_FILTER_GRAYSCALE);
	imagefilter($image->resource, IMG_FILTER_BRIGHTNESS, -15);
	imagefilter($image->resource, IMG_FILTER_CONTRAST, -15);

    return TRUE;
}

function filterfy_gd_antique(stdClass $image, $data) {

	imagefilter($image->resource, IMG_FILTER_BRIGHTNESS, 0);
	imagefilter($image->resource, IMG_FILTER_CONTRAST, -30);
	imagefilter($image->resource, IMG_FILTER_COLORIZE, 75, 50, 25);

    return TRUE;
}

function filterfy_gd_colorboost(stdClass $image, $data) {

	imagefilter($image->resource, IMG_FILTER_CONTRAST, -35);
	imagefilter($image->resource, IMG_FILTER_COLORIZE, 25, 25, 25);

    return TRUE;
}

function filterfy_gd_sepia(stdClass $image, $data) {

	imagefilter($image->resource, IMG_FILTER_GRAYSCALE);
	imagefilter($image->resource, IMG_FILTER_BRIGHTNESS, -10);
	imagefilter($image->resource, IMG_FILTER_CONTRAST, -20);
	imagefilter($image->resource, IMG_FILTER_COLORIZE, 60, 30, -15);

    return TRUE;
}

function filterfy_gd_blur(stdClass $image, $data) {

	imagefilter($image->resource, IMG_FILTER_SELECTIVE_BLUR);
	imagefilter($image->resource, IMG_FILTER_GAUSSIAN_BLUR);
	imagefilter($image->resource, IMG_FILTER_CONTRAST, -15);
	imagefilter($image->resource, IMG_FILTER_SMOOTH, -2);

    return TRUE;
}