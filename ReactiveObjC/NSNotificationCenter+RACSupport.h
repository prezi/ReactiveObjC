//
//  NSNotificationCenter+RACSupport.h
//  ReactiveObjC
//
//  Created by Josh Abernathy on 5/10/12.
//  Copyright (c) 2012 GitHub. All rights reserved.
//

#import <Foundation/Foundation.h>

@class RACSignal;

NS_ASSUME_NONNULL_BEGIN

@interface NSNotificationCenter (RACSupport)

// Sends the NSNotification every time the notification is posted.
- (RACSignal *)rac_addObserverForName:(nullable NSString *)notificationName object:(nullable id)object;

@end

NS_ASSUME_NONNULL_END
