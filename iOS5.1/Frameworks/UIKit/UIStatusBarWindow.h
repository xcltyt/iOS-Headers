/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIWindow.h>

@class UIStatusBar, UIStatusBarCorners;

@interface UIStatusBarWindow : UIWindow
{
    UIStatusBar *_statusBar;
    int _orientation;
    UIStatusBarCorners *_topCorners;
    UIStatusBarCorners *_bottomCorners;
    BOOL _cornersHidden;
}

+ (struct CGRect)statusBarWindowFrame;
- (void)_updateTransformLayerForClassicPresentation;
- (BOOL)_isStatusBarWindow;
- (BOOL)_disableGroupOpacity;
- (BOOL)_disableViewScaling;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setTopCornerStyle:(int)arg1 bottomCornerStyle:(int)arg2 animationParameters:(id)arg3;
- (void)setCornersHidden:(BOOL)arg1 animationParameters:(id)arg2;
- (int)orientation;
- (void)_rotate;
- (void)_fadeAnimationStopped:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)setOrientation:(int)arg1 animationParameters:(id)arg2;
- (void)setStatusBar:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

