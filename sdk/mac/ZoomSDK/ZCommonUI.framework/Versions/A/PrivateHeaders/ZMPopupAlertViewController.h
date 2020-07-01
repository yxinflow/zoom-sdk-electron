//
//  ZMPopupAlertViewController.h
//  zChatUI
//
//  Created by groot.ding on 2018/9/13.
//  Copyright © 2018 Zoom. All rights reserved.
//

#import "ZMBaseViewController.h"
#import "NSView+Create.h"

typedef enum : NSUInteger {
    ZMPopupAlertConfirm,
    ZMPopupAlertCancel,
} ZMPopupAlertIndex;

@interface ZMPopupAlertViewController : ZMBaseViewController

@property (nonatomic,copy) NSString *titleString;

@property (nonatomic,copy) NSString *contentString;

@property (nonatomic,copy) NSString *confirmTitle;

@property (nonatomic,copy) NSAttributedString *contentAttributedString;

@property (nonatomic,assign) ZMButtonStyle confirmButtonStyle;

@property (nonatomic,assign) NSSize contentSize;

@property (nonatomic,assign) BOOL showCancelButton;

@property (nonatomic,assign) BOOL showConfirmButton;

@property (nonatomic,copy) void(^actionBlock)(ZMPopupAlertIndex index);

@property (nonatomic,retain) NSDictionary *userInfo;

//default NO(NSLineBreakByTruncatingTail)
@property (nonatomic,assign) BOOL isTitleBreakByWord;

@property (nonatomic, copy) NSString *cancelTitle;

- (void)dismiss;

- (__kindof NSButton *)buttonAtIndex:(ZMPopupAlertIndex)index;

- (NSTextField *)infoTextField;

- (NSSize)calculateContentSize;

@end
