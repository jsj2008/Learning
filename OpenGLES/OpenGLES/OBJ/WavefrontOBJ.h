//
//  WavefrontOBJ.h
//  OpenGLES
//
//  Created by 谢鹏翔 on 2017/11/14.
//  Copyright © 2017年 365ime. All rights reserved.
//

#import "GLObject.h"

@interface WavefrontOBJ : GLObject

- (instancetype)initWithGLContext:(GLContext *)context objFile:(NSString *)filePath;

+ (instancetype)objWithGLContext:(GLContext *)context objFile:(NSString *)filePath diffuseMap:(GLKTextureInfo *)diffuseMap normalMap:(GLKTextureInfo *)normalMap;

@end
