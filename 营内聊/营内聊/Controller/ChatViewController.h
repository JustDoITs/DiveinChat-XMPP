//
//  ChatViewController.h
//  营内聊
//
//  Created by WuQiong on 14/11/13.
//  Copyright (c) 2014年 戴维营教育. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "XMPPFramework.h"

@interface ChatViewController : UIViewController
@property (nonatomic, strong) XMPPUserCoreDataStorageObject *user;
@end
