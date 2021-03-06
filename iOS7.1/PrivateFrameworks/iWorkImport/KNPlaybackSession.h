//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSDAnimationSession.h"

@class KNAnimatedSlideView, KNAnimationContext, KNShow, KNSlideNode, NSMutableArray, TSULRUCache;

__attribute__((visibility("hidden")))
@interface KNPlaybackSession : NSObject <TSDAnimationSession>
{
    CDUnknownBlockType mEndShowHandler;
    BOOL mHasEndShowHandlerBeenCancelled;
    id <TSDCanvasDelegate> mCanvasDelegate;
    TSULRUCache *mASVCache;
    KNSlideNode *mCurrentSlideNode;
    KNSlideNode *mAlternateNextSlideNode;
    NSMutableArray *mBreadCrumbTrail;
    KNSlideNode *mLastVisitedSlideNode;
    KNShow *mShow;
    KNAnimationContext *mAnimationContext;
    int mPlayMode;
    BOOL mSkipSlides;
    BOOL mShouldAnimateTransitionOnLastSlide;
    BOOL mShouldAnimateNullTransitions;
    BOOL mShouldUseContentlessLayers;
    BOOL mSkipBuilds;
    BOOL mShouldPreferCARenderer;
    BOOL mDisableAutoAnimationRemoval;
    BOOL mShouldAutomaticallyPlayMovies;
    BOOL mShouldShowVideoReflectionsAndMasks;
    BOOL mShouldForceTextureGeneration;
    BOOL mShouldAlwaysSetCurrentGLContextWhenDrawing;
}

@property(nonatomic) BOOL shouldAlwaysSetCurrentGLContextWhenDrawing; // @synthesize shouldAlwaysSetCurrentGLContextWhenDrawing=mShouldAlwaysSetCurrentGLContextWhenDrawing;
@property(nonatomic) BOOL shouldForceTextureGeneration; // @synthesize shouldForceTextureGeneration=mShouldForceTextureGeneration;
@property(nonatomic) BOOL shouldShowVideoReflectionsAndMasks; // @synthesize shouldShowVideoReflectionsAndMasks=mShouldShowVideoReflectionsAndMasks;
@property(nonatomic) BOOL shouldAutomaticallyPlayMovies; // @synthesize shouldAutomaticallyPlayMovies=mShouldAutomaticallyPlayMovies;
@property(nonatomic) BOOL disableAutoAnimationRemoval; // @synthesize disableAutoAnimationRemoval=mDisableAutoAnimationRemoval;
@property(nonatomic) BOOL shouldPreferCARenderer; // @synthesize shouldPreferCARenderer=mShouldPreferCARenderer;
@property(nonatomic) BOOL skipBuilds; // @synthesize skipBuilds=mSkipBuilds;
@property(nonatomic) BOOL skipSlides; // @synthesize skipSlides=mSkipSlides;
@property(nonatomic) BOOL shouldUseContentlessLayers; // @synthesize shouldUseContentlessLayers=mShouldUseContentlessLayers;
@property(nonatomic) BOOL shouldAnimateNullTransitions; // @synthesize shouldAnimateNullTransitions=mShouldAnimateNullTransitions;
@property(nonatomic) BOOL shouldAnimateTransitionOnLastSlide; // @synthesize shouldAnimateTransitionOnLastSlide=mShouldAnimateTransitionOnLastSlide;
@property(readonly, nonatomic) KNShow *show; // @synthesize show=mShow;
@property(nonatomic) int playMode; // @synthesize playMode=mPlayMode;
@property(copy, nonatomic) CDUnknownBlockType endShowHandler; // @synthesize endShowHandler=mEndShowHandler;
@property(nonatomic) id <TSDCanvasDelegate> canvasDelegate; // @synthesize canvasDelegate=mCanvasDelegate;
@property(retain, nonatomic) NSMutableArray *breadCrumbTrail; // @synthesize breadCrumbTrail=mBreadCrumbTrail;
@property(readonly, nonatomic) KNAnimationContext *animationContext; // @synthesize animationContext=mAnimationContext;
@property(nonatomic) KNSlideNode *alternateNextSlideNode; // @synthesize alternateNextSlideNode=mAlternateNextSlideNode;
- (void)cancelEndShowHandler;
- (void)p_executeEndShowHandler;
- (void)executeEndShowHandlerAfterDelay:(double)arg1;
- (void)renderTextureSetContentsIfNeeded:(id)arg1;
- (void)renderTextureContentsIfNeeded:(id)arg1;
- (id)renderedTextureSetForRep:(id)arg1 context:(id)arg2;
- (id)renderedTextureSetForRep:(id)arg1;
- (void)invalidateSlideNumberLayoutsOnCanvas:(id)arg1;
- (id)repForInfo:(id)arg1 onCanvas:(id)arg2;
- (id)newCanvas;
- (float)showScale;
- (BOOL)isOffscreenPlayback;
@property(readonly, nonatomic) BOOL isPreview;
- (unsigned int)slideNumberForSlideNode:(id)arg1;
- (id)newTextureForSlideNode:(id)arg1 atEventIndex:(unsigned int)arg2;
- (id)newTextureForCurrentEvent;
- (id)preloadTexturesForSlideNode:(id)arg1 atSlideIndex:(unsigned int)arg2;
- (id)newTransitionTo:(id)arg1;
- (void)invalidateAnimatedSlideViewCache;
- (id)animatedSlideViewFor:(id)arg1 setupTransition:(BOOL)arg2;
@property(readonly, nonatomic) KNAnimatedSlideView *currentCachedAnimatedSlideView;
- (id)breadCrumb;
- (void)dropABreadCrumb;
- (id)gotoLastSlide;
- (id)lastSlideNode;
- (BOOL)atBegginingOfDeck;
- (id)gotoPreviousSlide;
- (id)previousSlideNodeBeforeCurrent;
- (id)gotoNextSlide;
- (id)nextSlideAfterCurrent;
- (id)nextSlideNodeAfterSlideNode:(id)arg1;
- (id)nextSlideNodeAfterCurrent;
- (id)currentSlideNode;
- (id)currentSlide;
- (id)gotoFirstSlide;
- (id)firstSlideNode;
- (void)gotoSlideNode:(id)arg1;
- (void)p_setCurrentSlideNode:(id)arg1;
- (void)dealloc;
- (id)initWithShow:(id)arg1 viewScale:(float)arg2 baseLayer:(id)arg3 isBaseLayerVisible:(BOOL)arg4 canvasDelegate:(id)arg5 endShowHandler:(CDUnknownBlockType)arg6;
@property(readonly, nonatomic) BOOL shouldShowInstructionalText;

@end

