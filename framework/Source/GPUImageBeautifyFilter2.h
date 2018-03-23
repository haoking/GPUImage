//
//  GPUImageBeautifyFilter.h
//  BeautifyFaceDemo
//
//  Created by guikz on 16/4/28.
//  Copyright © 2016年 guikz. All rights reserved.
//

#import "GPUImage.h"

@class GPUImageCombinationFilter2;

@interface GPUImageBeautifyFilter2 : GPUImageFilterGroup {
    GPUImageBilateralFilter *bilateralFilter;
//    GPUImageCannyEdgeDetectionFilter *cannyEdgeFilter;
    GPUImageSobelEdgeDetectionFilter *cannyEdgeFilter;
    GPUImageCombinationFilter2 *combinationFilter;
    GPUImageHSBFilter *hsbFilter;
}

@end
