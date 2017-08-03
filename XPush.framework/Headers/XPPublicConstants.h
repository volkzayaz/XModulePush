//
//  XPPublicConstants.h
//  XPush
//
//  Created by Vlad Soroka on 7/18/17.
//  Copyright © 2017 XPush. All rights reserved.
//

#ifndef XPPublicConstants_h
#define XPPublicConstants_h

@class XPMessageResponseNotification;

/**
 *	Notification name, which will be sent when device registered in the server.
 */
extern NSString *const XPushDeviceRegistrationNotification;

/**
 *	Notification name, which will be sent when message response received
 */
extern NSString *const XPushMessageResponseReceiveNotification __attribute__((deprecated("Consider switching to block based notification that are safer to use. ")));

/**
 *	Notification name, which will be sent when inbox badge has changed
 */
extern NSString *const XPushInboxBadgeChangeNotification;

typedef void(^MessageClickCallback)(XPMessageResponseNotification* x);
typedef void(^DeeplinkCallback)(NSString* x);

typedef NS_ENUM(NSInteger, XPResponseType) {
 
    XPResponseType_Click,
    XPResponseType_Dismiss
    
};

typedef NS_ENUM(NSInteger, XPMessageType) {
    
    XPMessageType_Push,
    XPMessageType_Inbox,
    XPMessageType_Inapp
    
};

#endif /* XPPublicConstants_h */
