//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _UITextSizeCache : NSObject
{
    struct ui_size_cache _cache;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (void)removeAllSizes;
- (void)addSize:(struct CGSize)arg1 baselineInfo:(CDStruct_ed12c78c *)arg2 forTargetSize:(struct CGSize)arg3;
- (_Bool)getSize:(struct CGSize *)arg1 baselineInfo:(CDStruct_ed12c78c *)arg2 forTargetSize:(struct CGSize)arg3 isMultiline:(_Bool)arg4;

@end
