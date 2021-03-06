//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RUNowPlayingPlaybackControlsView.h"

@class UIView;

@interface MusicNowPlayingPlaybackControlsView : RUNowPlayingPlaybackControlsView
{
}

+ (unsigned long long)defaultVisibleParts;
- (void)_shuffleTypeChangedNotification:(id)arg1;
- (void)_repeatTypeChangedNotification:(id)arg1;
- (void)_cloudControllerIsJaliscoGeniusEnabledDidChangeNotification:(id)arg1;
- (void)_applyShuffleSettingsToButton:(id)arg1;
- (void)_applyRepeatSettingsToButton:(id)arg1;
@property(readonly, nonatomic) UIView *viewForPresentingRepeat;
- (void)_updateForItemDidChangeAnimated:(BOOL)arg1;
- (Class)_transportControlsClass;
- (id)_titleForCreateAction:(int)arg1;
- (id)_availableCreateActionsForItem:(id)arg1;
- (void)unregisterForPlayerNotifications;
- (void)reloadView;
- (void)registerForPlayerNotifications;
- (id)playbackSpeedTitleForPlaybackSpeed:(unsigned int)arg1;
- (id)playbackSpeedButtonImageForPlaybackSpeed:(unsigned int)arg1;
- (id)newButtonForPart:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

