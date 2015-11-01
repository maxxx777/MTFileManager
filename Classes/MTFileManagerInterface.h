//
//  MTFileManagerInterface.h
//  CityGuideTestApp
//
//  Created by MAXIM TSVETKOV on 15.10.15.
//  Copyright © 2015 MAXIM TSVETKOV. All rights reserved.
//

#import "MTFileManagerCompletionHandlingConstants.h"
#import "MTFileManagerErrorHandlingConstants.h"

@protocol MTFileManagerInterface <NSObject>

- (void)downloadFileWithURL:(NSURL * _Nonnull)url
                 completion:(MTFileManagerDownloadFileCompletionBlock _Nullable)completionBlock;
- (void)readJSONFromFileWithName:(NSString * _Nonnull)fileName
                      completion:(MTFileManagerReadJSONCompletionBlock _Nullable)completionBlock;
- (void)saveFileWithData:(NSData * _Nonnull)data
              completion:(MTFileManagerSaveFileCompletionBlock _Nullable)completionBlock;
- (void)removeFileWithName:(NSString * _Nonnull)fileName
                completion:(MTFileManagerRemoveFileCompletionBlock _Nullable)completionBlock;

@end
