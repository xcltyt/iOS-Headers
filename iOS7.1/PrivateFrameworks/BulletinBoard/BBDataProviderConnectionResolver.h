//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BBXPCConnectionDelegate.h"
#import "XPCProxyTarget.h"

@class BBXPCIncomingConnection;

@interface BBDataProviderConnectionResolver : NSObject <BBXPCConnectionDelegate, XPCProxyTarget>
{
    BBXPCIncomingConnection *_connection;
    CDUnknownBlockType _establishedBlock;
}

- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)connection:(id)arg1 connectionStateDidChange:(BOOL)arg2;
- (void)establishSectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

