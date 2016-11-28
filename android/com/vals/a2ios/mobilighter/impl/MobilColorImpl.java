package com.vals.a2ios.mobilighter.impl;

//import android.graphics.Color;

import android.graphics.Color;

import com.vals.a2ios.mobilighter.intf.MobilColor;

/**
 * Created by vsayenko on 11/14/16.
 */

public class MobilColorImpl implements MobilColor {

    private Integer colorInt;

    @Override
    public void setRgba(float r, float g, float b, float a) {
        colorInt = Color.rgb((int)r, (int)g, (int)b);
        colorInt = Color.alpha(colorInt);
    }

    @Override
    public Integer getColor() {
        return colorInt;
    }
}
