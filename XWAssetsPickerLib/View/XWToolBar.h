//
//  XWToolBar.h
//  XWAssetsPicker
//
//  Created by 曾超 on 15/8/20.
//  Copyright (c) 2015年 小微软件. All rights reserved.
//

#import <UIKit/UIKit.h>

@class XWAssetsPikerViewController;

@class XWToolBar;

@protocol XWToolBarDelegate <NSObject>

@optional
- (void)toolbarPreview:(XWToolBar *)target;
- (void)toolbarSend:(XWToolBar *)target;

@end

@interface XWToolBar : UIToolbar

@property (nonatomic ,assign) id <XWToolBarDelegate> tbdelegate;

@property (nonatomic ,strong) UILabel *recordLabel;

@property (nonatomic ,strong) UIButton *previewBtn;

@property (nonatomic ,assign) BOOL actionEnable;

@property (nonatomic ,weak) XWAssetsPikerViewController *picker;

- (id)initWithFrame:(CGRect)frame andPicker:(XWAssetsPikerViewController *)picker;

- (void)setupToolBar:(BOOL)isShow;

@end
