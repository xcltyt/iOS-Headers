//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class GKColorPalette;

@interface GKViewController : UIViewController
{
    BOOL _shouldUpdateContentOnlyWhenAuthenticated;
    GKViewController *_rootViewController;
    GKColorPalette *_colorPalette;
    int _gkFocusBubbleType;
}

+ (BOOL)_shouldForwardViewWillTransitionToSize;
@property(nonatomic) int gkFocusBubbleType; // @synthesize gkFocusBubbleType=_gkFocusBubbleType;
@property(nonatomic) BOOL shouldUpdateContentOnlyWhenAuthenticated; // @synthesize shouldUpdateContentOnlyWhenAuthenticated=_shouldUpdateContentOnlyWhenAuthenticated;
@property(retain, nonatomic) GKColorPalette *colorPalette; // @synthesize colorPalette=_colorPalette;
@property(retain, nonatomic) GKViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)popToRootViewControllerAnimated:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)displayUsingSplitNavigationBar;
- (void)loadView;
- (void)dealloc;

@end
