//
//  SKSpriteNode+LUIImages.h
//
//  Created by Ondrej Rafaj on 03/06/2015.
//  Copyright (c) 2015 Ridiculous Innovations. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>


@interface SKSpriteNode (LUIImages)

+ (SKSpriteNode *)spriteNodeWithLUIImageNamed:(NSString *)name;

- (void)registerNodeWithImageKey:(NSString *)key;


@end
