//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IKAppContext, IKJSObject, IKViewElement, NSString;

@protocol IKDOMFeature <NSObject>
@property __weak IKAppContext *appContext;
@property(readonly, retain, nonatomic) NSString *featureName;
- (IKJSObject *)featureJSObject;
- (id)initWithFeatureName:(NSString *)arg1;

@optional
- (void)migrateToViewElement:(IKViewElement *)arg1;
@end

