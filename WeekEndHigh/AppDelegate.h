//
//  AppDelegate.h
//  WeekEndHigh
//
//  Created by scjy on 16/1/4.
//  Copyright © 2016年 scjy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (nonatomic, strong) UITabBarController *tabBarVC;

@property (nonatomic, strong) NSString *wbtoken;
@property (nonatomic, strong) NSString *wbRefreshToken;
@property (nonatomic, strong) NSString *wbCurrentUserId;

@end

