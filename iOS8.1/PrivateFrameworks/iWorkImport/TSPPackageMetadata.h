//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

__attribute__((visibility("hidden")))
@interface TSPPackageMetadata : TSPObject
{
    struct PackageMetadata _message;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)tsp_identifier;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)packageLocator;
- (struct PackageMetadata *)message;

@end

