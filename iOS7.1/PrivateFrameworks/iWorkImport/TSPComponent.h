//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSDiscardableContent.h"

@class NSHashTable, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, TSPComponentExternalReferenceMap, TSPObject;

__attribute__((visibility("hidden")))
@interface TSPComponent : NSObject <NSCopying, NSDiscardableContent>
{
    int _accessCount;
    id <TSPComponentDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_accessQueue;
    long long _identifier;
    NSString *_preferredLocator;
    NSString *_locator;
    unsigned long long _readVersion;
    unsigned long long _writeVersion;
    TSPObject *_strongRootObject;
    TSPObject *_weakRootObject;
    NSHashTable *_writtenObjects;
    TSPComponentExternalReferenceMap *_externalReferenceMap;
    NSMutableSet *_dataReferences;
    struct {
        unsigned int usesDelayedArchiving:1;
        unsigned int allowsDuplicatesOutsideOfDocumentPackage:1;
        unsigned int dirtiesDocumentPackage:1;
        unsigned int modified:1;
        unsigned int persisted:1;
        unsigned int isStoredOutsideObjectArchive:1;
        unsigned int packageIdentifier:2;
    } _flags;
    TSPComponent *_originalDocumentComponent;
}

@property(readonly, nonatomic) TSPComponent *originalDocumentComponent; // @synthesize originalDocumentComponent=_originalDocumentComponent;
@property(readonly, nonatomic) NSString *preferredLocator; // @synthesize preferredLocator=_preferredLocator;
@property(readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long writeVersion; // @synthesize writeVersion=_writeVersion;
@property(readonly, nonatomic) unsigned long long readVersion; // @synthesize readVersion=_readVersion;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateDataReferences:(CDUnknownBlockType)arg1;
- (id)newUpdatedExternalReferenceMapUsingDelegate:(id)arg1;
- (BOOL)addExternalReferenceToObjectOrLazyReference:(id)arg1 isWeak:(BOOL)arg2 externalReferenceMap:(id)arg3 delegate:(id)arg4;
- (id)newExternalReferenceMapWithStrongReferences:(id)arg1 weakReferences:(id)arg2 delegate:(id)arg3;
- (struct ComponentExternalReferenceInfo)externalReferenceInfoForObjectIdentifier:(long long)arg1;
- (void)enumerateExternalReferences:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL isTransientComponent;
@property(readonly) BOOL needsArchiving;
- (BOOL)needsArchivingImpl;
@property(readonly) BOOL persisted;
- (void)willDiscardComponent;
- (void)setPackageIdentifier:(unsigned char)arg1 preferredLocator:(id)arg2 locator:(id)arg3 isStoredOutsideObjectArchive:(BOOL)arg4 rootObjectOrNil:(id)arg5 archivedObjects:(id)arg6 externalReferenceMap:(id)arg7 dataReferences:(id)arg8 readVersion:(unsigned long long)arg9 writeVersion:(unsigned long long)arg10 wasCopied:(BOOL)arg11 wasModifiedDuringWrite:(BOOL)arg12;
- (void)didReadObjects:(id)arg1;
- (void)setArchivedObjectsImpl:(id)arg1;
- (void)setModifiedImpl:(BOOL)arg1 forObject:(id)arg2;
- (void)setModified:(BOOL)arg1 forObject:(id)arg2 isDocumentUpgrade:(BOOL)arg3;
- (void)setModified:(BOOL)arg1 forObject:(id)arg2;
@property(readonly) BOOL modified;
- (BOOL)dirtiesDocumentPackageQueryingRootObject:(BOOL)arg1;
- (BOOL)allowsDuplicatesOutsideOfDocumentPackageQueryingRootObject:(BOOL)arg1;
- (void)updateComponentPropertiesUsingRootObjectOrNil:(id)arg1;
@property(readonly) unsigned char packageIdentifier;
@property(readonly, nonatomic) BOOL isStoredOutsideObjectArchive;
- (void)setLocator:(id)arg1;
@property(readonly, nonatomic) NSString *locator;
- (BOOL)isContentDiscarded;
- (void)endContentAccess;
- (BOOL)beginContentAccess;
- (void)discardContentIfPossible;
@property(retain) TSPObject *rootObject;
- (BOOL)shouldKeepStrongObjectImpl;
- (BOOL)shouldForceCaching;
- (BOOL)isCachingEnabled;
- (id)initWithDelegate:(id)arg1 message:(const struct ComponentInfo *)arg2 packageIdentifier:(unsigned char)arg3 originalDocumentComponent:(id)arg4;
- (id)initWithDelegate:(id)arg1 rootObject:(id)arg2;
- (id)initWithDelegate:(id)arg1 identifier:(long long)arg2 preferredLocator:(id)arg3 packageIdentifier:(unsigned char)arg4 isStoredOutsideObjectArchive:(BOOL)arg5 allowsDuplicatesOutsideOfDocumentPackage:(BOOL)arg6 dirtiesDocumentPackage:(BOOL)arg7;
- (id)initWithDelegate:(id)arg1 identifier:(long long)arg2 preferredLocator:(id)arg3 packageIdentifier:(unsigned char)arg4 isStoredOutsideObjectArchive:(BOOL)arg5 allowsDuplicatesOutsideOfDocumentPackage:(BOOL)arg6 dirtiesDocumentPackage:(BOOL)arg7 originalDocumentComponent:(id)arg8;
- (id)init;
- (void)saveToMessage:(struct ComponentInfo *)arg1 writtenComponentInfo:(const struct WrittenComponentInfo *)arg2;

@end
