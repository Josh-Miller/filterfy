<?php

function filterfy_gd_blackwhite(stdClass $image, $data) {

	imagefilter($image->resource, IMG_FILTER_GRAYSCALE);
	imagefilter($image->resource, IMG_FILTER_BRIGHTNESS, 10);
	imagefilter($image->resource, IMG_FILTER_CONTRAST, -20);
	
	drupal_alter('filterfy_blackwhite', $image->resource);

    return TRUE;
}

function filterfy_gd_dreamy(stdClass $image, $data) {

	imagefilter($image->resource, IMG_FILTER_BRIGHTNESS, 20);
	imagefilter($image->resource, IMG_FILTER_CONTRAST, -35);
	imagefilter($image->resource, IMG_FILTER_COLORIZE, 60, -10, 35);
	imagefilter($image->resource, IMG_FILTER_SMOOTH, 7);

	drupal_alter('filterfy_dreamy', $image->resource);

    return TRUE;
}

function filterfy_gd_bluevelvet(stdClass $image, $data) {

	imagefilter($image->resource, IMG_FILTER_BRIGHTNESS, 5);
	imagefilter($image->resource, IMG_FILTER_CONTRAST, -25);
	imagefilter($image->resource, IMG_FILTER_COLORIZE, -10, 45, 65);

	drupal_alter('filterfy_bluevelvet', $image->resource);

    return TRUE;
}

function filterfy_gd_chrome(stdClass $image, $data) {

	imagefilter($image->resource, IMG_FILTER_BRIGHTNESS, 5);
	imagefilter($image->resource, IMG_FILTER_CONTRAST, -25);
	imagefilter($image->resource, IMG_FILTER_COLORIZE, -10, 45, 65);

	drupal_alter('filterfy_chrome', $image->resource);

    return TRUE;
}

function filterfy_gd_lift(stdClass $image, $data) {

	imagefilter($image->resource, IMG_FILTER_BRIGHTNESS, 50);
	imagefilter($image->resource, IMG_FILTER_CONTRAST, -25);
	imagefilter($image->resource, IMG_FILTER_COLORIZE, 75, 0, 25);

	drupal_alter('filterfy_lift', $image->resource);

    return TRUE;
}

function filterfy_gd_canvas(stdClass $image, $data) {

	imagefilter($image->resource, IMG_FILTER_BRIGHTNESS, 25);
	imagefilter($image->resource, IMG_FILTER_CONTRAST, -25);
	imagefilter($image->resource, IMG_FILTER_COLORIZE, 50, 25, -35);

	drupal_alter('filterfy_canvas', $image->resource);

    return TRUE;
}

function filterfy_gd_vintage(stdClass $image, $data) {

	imagefilter($image->resource, IMG_FILTER_BRIGHTNESS, 15);
	imagefilter($image->resource, IMG_FILTER_CONTRAST, -25);
	imagefilter($image->resource, IMG_FILTER_COLORIZE, -10, -5, -15);
	imagefilter($image->resource, IMG_FILTER_SMOOTH, 7);

	drupal_alter('filterfy_vintage', $image->resource);

    return TRUE;
}

function filterfy_gd_monopin(stdClass $image, $data) {

	imagefilter($image->resource, IMG_FILTER_GRAYSCALE);
	imagefilter($image->resource, IMG_FILTER_BRIGHTNESS, -15);
	imagefilter($image->resource, IMG_FILTER_CONTRAST, -15);

	drupal_alter('filterfy_monopin', $image->resource);

    return TRUE;
}

function filterfy_gd_antique(stdClass $image, $data) {

	imagefilter($image->resource, IMG_FILTER_BRIGHTNESS, 0);
	imagefilter($image->resource, IMG_FILTER_CONTRAST, -30);
	imagefilter($image->resource, IMG_FILTER_COLORIZE, 75, 50, 25);

	drupal_alter('filterfy_antique', $image->resource);

    return TRUE;
}

function filterfy_gd_colorboost(stdClass $image, $data) {

	imagefilter($image->resource, IMG_FILTER_CONTRAST, -35);
	imagefilter($image->resource, IMG_FILTER_COLORIZE, 25, 25, 25);

	drupal_alter('filterfy_colorboost', $image->resource);

    return TRUE;
}

function filterfy_gd_sepia(stdClass $image, $data) {

	imagefilter($image->resource, IMG_FILTER_GRAYSCALE);
	imagefilter($image->resource, IMG_FILTER_BRIGHTNESS, -10);
	imagefilter($image->resource, IMG_FILTER_CONTRAST, -20);
	imagefilter($image->resource, IMG_FILTER_COLORIZE, 60, 30, -15);

	drupal_alter('filterfy_sepia', $image->resource);

    return TRUE;
}

function filterfy_gd_blur(stdClass $image, $data) {

	imagefilter($image->resource, IMG_FILTER_SELECTIVE_BLUR);
	imagefilter($image->resource, IMG_FILTER_GAUSSIAN_BLUR);
	imagefilter($image->resource, IMG_FILTER_CONTRAST, -15);
	imagefilter($image->resource, IMG_FILTER_SMOOTH, -2);

	drupal_alter('filterfy_blur', $image->resource);

    return TRUE;
}