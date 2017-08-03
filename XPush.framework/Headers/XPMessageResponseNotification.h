//
//  XPMessageResponseNotification.h
//  XPush
//
//  Created by Vlad Soroka on 7/18/17.
//  Copyright © 2017 XPush. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "XPPublicConstants.h"
#import "XPResponsePayload.h"

@interface XPMessageResponseNotification : NSObject

@property (nonatomic, readonly, nonnull) NSDictionary      *messagePayload;

@property (nonatomic, readonly) XPResponseType    responseType;
@property (nonatomic, readonly) XPMessageType     messageType;

@property (nonatomic, readonly, nullable) XPResponsePayload *responsePayload;

@end

