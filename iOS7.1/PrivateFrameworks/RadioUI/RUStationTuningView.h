//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class RUStationTuningSlider, RadioStation, UIImageView, UILabel;

@interface RUStationTuningView : UIView
{
    RUStationTuningSlider *_tuningSlider;
    float _tuningSliderMaskDrawnWidth;
    UIImageView *_tuningSliderMaskView;
    UILabel *_tuningType1Label;
    UILabel *_tuningType2Label;
    UILabel *_tuningType3Label;
    RadioStation *_station;
}

@property(retain, nonatomic) RadioStation *station; // @synthesize station=_station;
- (void).cxx_destruct;
- (id)maskImageForSliderTrack;
- (void)_tapRecognizedAction:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

