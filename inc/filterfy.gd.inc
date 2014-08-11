<?php


function filterfy_gd_nashville(stdClass $image, $data) {
	dpm($image);
    $image->resource->colortone($this->_tmp, '#222b6d', 100, 0);
    $image->resource->colortone($this->_tmp, '#f7daae', 100, 1);
     
    $image->resource->execute("convert $this->_tmp -contrast -modulate 100,150,100 -auto-gamma $this->_tmp");
    $image->resource->frame($this->_tmp, __FUNCTION__);
     
    $image->resource->output();

    return TRUE;
}