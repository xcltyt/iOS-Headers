//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSArray;

@interface CertUIItemDetailsSummaryCell : UITableViewCell
{
    NSArray *_detailViews;
    float _detailLabelOriginX;
}

@property(nonatomic) float detailLabelOriginX; // @synthesize detailLabelOriginX=_detailLabelOriginX;
@property(retain, nonatomic) NSArray *detailViews; // @synthesize detailViews=_detailViews;
- (void).cxx_destruct;
- (void)createViewWithItemDetailArray:(id)arg1;
- (void)createViewWithDescriptors:(id)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

