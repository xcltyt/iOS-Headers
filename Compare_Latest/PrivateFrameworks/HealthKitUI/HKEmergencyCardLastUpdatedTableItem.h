//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKitUI/HKEmergencyCardTableItem.h>

@class NSDateFormatter, UILabel, UITableViewCell;

@interface HKEmergencyCardLastUpdatedTableItem : HKEmergencyCardTableItem
{
    UITableViewCell *_cell;
    UILabel *_lastUpdatedLabel;
    NSDateFormatter *_dateFormatter;
}

- (void).cxx_destruct;
- (struct UIEdgeInsets)separatorInset;
- (float)tableView:(id)arg1 heightForRowAtIndex:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndex:(int)arg2;
- (BOOL)hasPresentableData;
- (id)initInEditMode:(BOOL)arg1;

@end

