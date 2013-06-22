/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKMultilineCellContentView.h>

@class GKPlayer;

@interface GKPlayerCellContentView : GKMultilineCellContentView
{
    GKPlayer *_player;
    int _photoSize;
    BOOL _showAlias;
    BOOL _shouldShowPhoto;
}

+ (void)loadPhotoOfSize:(int)arg1 forPlayer:(id)arg2 completionHandler:(id)arg3;
+ (id)cachedPhotoOfSize:(int)arg1 forPlayer:(id)arg2;
+ (id)imageSourceForPhotoSize:(int)arg1;
+ (id)playerContentView;
@property(nonatomic) BOOL shouldShowPhoto; // @synthesize shouldShowPhoto=_shouldShowPhoto;
@property(nonatomic) BOOL showAlias; // @synthesize showAlias=_showAlias;
@property(nonatomic) int photoSize; // @synthesize photoSize=_photoSize;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
- (void)prepareForReuse;
- (void)updateLines;
- (void)layoutSubviews;
- (id)lastPlayedGameStringForDate:(id)arg1 withGame:(id)arg2;
- (void)dealloc;
- (id)initWithNumberOfLines:(unsigned int)arg1;
- (struct CGRect)_gkPopoverPresentationRect;

@end
