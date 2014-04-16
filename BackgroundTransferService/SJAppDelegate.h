//
//  SJAppDelegate.h
//  BackgroundTransferService
//
//  Created by  imac_hjq on 14-4-16.
//  Copyright (c) 2014年  mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SJAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (copy) void (^backgroundSessionCompletionHandler)();

@end
