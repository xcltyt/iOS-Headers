//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSArray, NSString, SKUIClientContext, SKUIReviewList, SKUIReviewsHistogramView, UIControl;

@interface SKUIReviewsHistogramViewController : UIViewController
{
    SKUIClientContext *_clientContext;
    SKUIReviewsHistogramView *_histogramView;
    SKUIReviewList *_reviewList;
}

@property(retain, nonatomic) SKUIReviewList *reviewList; // @synthesize reviewList=_reviewList;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)_reloadHistogram;
- (id)_histogramView;
- (void)loadView;
@property(readonly, nonatomic) UIControl *writeAReviewButton;
@property(copy, nonatomic) NSString *versionString;
@property(readonly, nonatomic) UIControl *starRatingControl;
@property(nonatomic) int selectedSegmentIndex;
@property(copy, nonatomic) NSArray *segmentedControlTitles;
@property(nonatomic) int personalStarRating;
@property(readonly, nonatomic) UIControl *segmentedControl;
@property(readonly, nonatomic) UIControl *appSupportButton;

@end

