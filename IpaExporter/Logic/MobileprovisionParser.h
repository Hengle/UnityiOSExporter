//
//  MobileprovisionParser.h
//  IpaExporter
//
//  Created by 4399 on 6/3/19.
//  Copyright © 2019 何遵祖. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MobileprovisionParser : NSObject

- (id)initWithProfilePath:(NSString*)path;
- (void)createPlistFile;
- (void)parsePlistFile;

@property (nonatomic, readonly) NSString* rootPath;
@property (nonatomic, readonly) NSString* fileName;
@property (nonatomic, readonly) NSString* appIDName;
@property (nonatomic, readonly) NSString* teamID;
@property (nonatomic, readonly) NSString* creationDate;
@end

NS_ASSUME_NONNULL_END
