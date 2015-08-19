//
//  LUIDataFileObject.h
//  LUIFramework
//
//  Created by Ondrej Rafaj on 12/08/2015.
//  Copyright (c) 2015 Ridiculous Innovations. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef void (^LUIDataFileObjectDownloadSuccessBlock)(NSData *data, NSError *error);

typedef NS_ENUM(NSInteger, LUIDataFileType) {
    LUIDataFileTypeImage,
    LUIDataFileTypePDF,
    LUIDataFileTypeUnknown
};


@interface LUIDataFileObject : NSObject

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSUInteger size;
@property (nonatomic, readonly) NSString *mime;
@property (nonatomic, readonly) NSString *extension;

@property (nonatomic, readonly) LUIDataFileType fileType;

@property (nonatomic, readonly) NSData *fileData;

- (void)getFileDataWithSuccessBlock:(LUIDataFileObjectDownloadSuccessBlock)success;


@end
