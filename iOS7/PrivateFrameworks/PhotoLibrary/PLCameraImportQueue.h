/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface PLCameraImportQueue : NSObject
{
    NSMutableArray *_items;
    unsigned long long _index;
}

- (id)itemsNotCompleted;
- (id)completedItems;
- (_Bool)isCompleted;
- (void)didCompleteItem:(id)arg1;
- (id)currentItem;
- (void)_removeItem:(id)arg1;
- (void)setItems:(id)arg1;
- (id)items;
- (id)description;
- (void)dealloc;
- (id)initWithItems:(id)arg1;

@end

