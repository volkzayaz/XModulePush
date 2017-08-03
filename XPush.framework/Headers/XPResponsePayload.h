//
//  XPResponsePayload.h
//  XPush
//
//  Created by Vlad Soroka on 7/19/17.
//  Copyright © 2017 XPush. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XPResponsePayload : NSObject

@property (nonatomic, readonly, nullable) NSString *button;
@property (nonatomic, readonly, nullable) NSURL *url;
@property (nonatomic, readonly, nullable) NSString *deeplink;

- (NSDictionary* _Nonnull) dictionaryRepresentation;

@end
