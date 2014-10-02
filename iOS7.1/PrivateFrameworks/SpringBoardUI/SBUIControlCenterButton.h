//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBFButton.h"

#import "SBUIControlCenterControl.h"

@class UIImage;

@interface SBUIControlCenterButton : SBFButton <SBUIControlCenterControl>
{
    struct UIEdgeInsets _bgCapInsets;
    BOOL _inverted;
    BOOL _isCircleButton;
    id <SBUIControlCenterButtonDelegate> _delegate;
    UIImage *_normalBGImage;
    UIImage *_selectedBGImage;
    UIImage *_sourceGlyphImage;
    UIImage *_normalGlyphImage;
    UIImage *_sourceSelectedGlyphImage;
    UIImage *_selectedGlyphImage;
    float _naturalHeight;
}

+ (struct UIEdgeInsets)visibleContentInsets;
+ (id)_buttonWithBGImage:(id)arg1 selectedBGImage:(id)arg2 glyphImage:(id)arg3 naturalHeight:(float)arg4;
+ (id)roundRectButtonWithGlyphImage:(id)arg1;
+ (id)circularButtonWithGlyphImage:(id)arg1;
+ (id)roundRectButton;
+ (id)circularButton;
+ (id)_roundRectBackgroundImageForState:(int)arg1;
+ (id)_circleBackgroundImageForState:(int)arg1 inverted:(BOOL)arg2;
+ (void)controlAppearanceDidChangeForState:(int)arg1;
+ (void)initialize;
@property(nonatomic) float naturalHeight; // @synthesize naturalHeight=_naturalHeight;
@property(retain, nonatomic) UIImage *selectedGlyphImage; // @synthesize selectedGlyphImage=_selectedGlyphImage;
@property(retain, nonatomic) UIImage *sourceSelectedGlyphImage; // @synthesize sourceSelectedGlyphImage=_sourceSelectedGlyphImage;
@property(retain, nonatomic) UIImage *normalGlyphImage; // @synthesize normalGlyphImage=_normalGlyphImage;
@property(retain, nonatomic) UIImage *sourceGlyphImage; // @synthesize sourceGlyphImage=_sourceGlyphImage;
@property(retain, nonatomic) UIImage *selectedBGImage; // @synthesize selectedBGImage=_selectedBGImage;
@property(retain, nonatomic) UIImage *normalBGImage; // @synthesize normalBGImage=_normalBGImage;
@property(nonatomic) BOOL isCircleButton; // @synthesize isCircleButton=_isCircleButton;
@property(nonatomic, getter=isInverted) BOOL inverted; // @synthesize inverted=_inverted;
@property(nonatomic) id <SBUIControlCenterButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void)controlConfigurationDidChangeForState:(int)arg1;
- (void)controlAppearanceDidChangeForState:(int)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)_pressAction;
- (struct CGSize)visibleContentSize;
- (void)setBackgroundImage:(id)arg1;
- (void)_setBackgroundImage:(id)arg1 selectedBackgroundImage:(id)arg2 naturalHeight:(float)arg3;
- (void)_rebuildBackgroundImages;
- (void)setGlyphImage:(id)arg1 selectedGlyphImage:(id)arg2;
- (void)_rebuildGlyphImages;
- (void)_rebuildSelectedGlyph;
- (void)_rebuildNormalGlyph;
- (void)_updateForStateChange;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setImage:(id)arg1 forState:(unsigned int)arg2;
- (int)_currentState;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 backgroundImage:(id)arg2 selectedBackgroundImage:(id)arg3 glyphImage:(id)arg4 naturalHeight:(float)arg5;

@end
