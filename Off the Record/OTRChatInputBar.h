//
//  OTRChatInputBar.h
//  Off the Record
//
//  Created by David on 9/20/13.
//  Copyright (c) 2013 Chris Ballinger. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ACPlaceholderTextView.h"

typedef void (^sendButtonBlock)(NSString * text);

@interface OTRChatInputBar : UIView <UITextViewDelegate>
{
    NSLayoutConstraint * textViewHeightConstraint;
    CGFloat previousTextViewContentHeight;
}


- (id)initWithFrame:(CGRect)frame withSendButtonPressedBlock:(sendButtonBlock)block;

@property (nonatomic,strong) UIImageView * backgroundImageview;
@property (nonatomic,strong) UIImageView * textViewBackgroundImageView;
@property (nonatomic,strong) ACPlaceholderTextView * textView;
@property (nonatomic,strong) UIButton * sendButton;

@property (nonatomic,copy) sendButtonBlock buttonBlock;

@end
