//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPMediaLibraryEntityTranslationContext, MPModelLibrarySearchScope;

@interface MPModelLibrarySearchEntityResultContainer : NSObject
{
    MPModelLibrarySearchScope *_scope;
    MPMediaLibraryEntityTranslationContext *_entityTranslationContext;
    shared_ptr_274c5e8b _entityQueryResult;
}

@property(readonly, nonatomic) MPMediaLibraryEntityTranslationContext *entityTranslationContext; // @synthesize entityTranslationContext=_entityTranslationContext;
@property(readonly, copy, nonatomic) MPModelLibrarySearchScope *scope; // @synthesize scope=_scope;
@property(readonly, nonatomic) shared_ptr_274c5e8b entityQueryResult; // @synthesize entityQueryResult=_entityQueryResult;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithEntityQueryResult:(shared_ptr_274c5e8b)arg1 forScope:(id)arg2 entityTranslationContext:(id)arg3;

@end

