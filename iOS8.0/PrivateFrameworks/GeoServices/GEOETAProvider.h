//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface GEOETAProvider : NSObject
{
}

- (void)cancelRequest;
- (void)startSimpleETARequest:(id)arg1 finished:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)updateRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)startRequest:(id)arg1 connectionProperties:(const CDStruct_3d12f1c7 *)arg2 willSendRequest:(CDUnknownBlockType)arg3 finished:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;
- (void)startRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;

@end
