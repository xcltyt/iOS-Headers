/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, SSDownloadManagerOptions;

@interface SUClientQueueSession : NSObject
{
    int _count;
    NSArray *_downloadKinds;
    SSDownloadManagerOptions *_managerOptions;
    id _queue;
}

@property(retain, nonatomic) id queue; // @synthesize queue=_queue;
@property(copy, nonatomic) SSDownloadManagerOptions *managerOptions; // @synthesize managerOptions=_managerOptions;
@property(copy, nonatomic) NSArray *downloadKinds; // @synthesize downloadKinds=_downloadKinds;
@property(nonatomic) int count; // @synthesize count=_count;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end

