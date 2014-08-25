<?php

/**
 * @file
 * API Functionality for Filterfy module.
 */

/**
 * Alter the image affect to apply custom filters and effects.
 * The example below can be applied to all image filters using
 * the function name. ex. hook_filterfy_FILTER_alter
 *
 * @param object $image
 *   The Image object that can be manipulated.
 */

function hook_filterfy_blackwhite_alter(&$image){

	imagefilter($image, IMG_FILTER_GRAYSCALE);
	imagefilter($image, IMG_FILTER_SELECTIVE_BLUR);
	imagefilter($image, IMG_FILTER_GAUSSIAN_BLUR);
	imagefilter($image, IMG_FILTER_CONTRAST, -15);
	imagefilter($image, IMG_FILTER_SMOOTH, -2);

}