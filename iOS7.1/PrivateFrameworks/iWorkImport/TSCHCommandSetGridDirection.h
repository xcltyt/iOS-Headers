//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCHChartCommand.h>

__attribute__((visibility("hidden")))
@interface TSCHCommandSetGridDirection : TSCHChartCommand
{
    int mNewDirection;
    int mOldDirection;
}

- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (const struct ChartCommandArchive *)chartCommandArchiveFromUnarchiver:(id)arg1;
- (void)redoPrimitive;
- (void)undoPrimitive;
- (void)commitPrimitive;
- (BOOL)process;
- (id)initWithChartInfo:(id)arg1 gridDirection:(int)arg2;

@end

