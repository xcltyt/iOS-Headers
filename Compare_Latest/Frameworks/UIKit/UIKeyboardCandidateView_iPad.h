//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKeyboardCandidateView.h>

#import "UICollectionViewDelegate.h"
#import "UIKeyboardCandidateBarDelegate.h"

@class NSString, UIKeyboardCandidatePageControl;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateView_iPad : UIKeyboardCandidateView <UICollectionViewDelegate, UIKeyboardCandidateBarDelegate>
{
    UIKeyboardCandidatePageControl *_pageControl;
}

+ (float)defaultExtendedControlHeight;
- (void)didEndSplitTransition;
- (void)candidateBarDidScroll:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updatePageControlStatus;
- (float)_additionalClipHeight;
- (void)setCandidateViewExtended:(BOOL)arg1;
- (int)_clipCornersOfView:(id)arg1;
- (void)layoutSubviews;
- (unsigned int)_numberOfColumns:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (float)rightButtonYOffset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

