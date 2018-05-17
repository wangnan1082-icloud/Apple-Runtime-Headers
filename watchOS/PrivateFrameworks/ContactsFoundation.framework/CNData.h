//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNFileManager, CNURLSessionFactory;

@interface CNData : NSObject
{
    CNFileManager *_fileManager;
    CNURLSessionFactory *_sessionFactory;
}

+ (unsigned int)NSDataWritingOptionsFromCNDataWritingOptions:(unsigned int)arg1;
+ (id)writeData:(id)arg1 toURL:(id)arg2 options:(unsigned int)arg3 fileManager:(id)arg4;
+ (id)writeData:(id)arg1 toURL:(id)arg2 options:(unsigned int)arg3;
+ (id)observableWithContentsOfURL:(id)arg1 sessionFactory:(id)arg2;
+ (id)observableWithContentsOfURL:(id)arg1;
+ (id)dataWithContentsOfURL:(id)arg1 sessionFactory:(id)arg2;
+ (id)dataWithContentsOfURL:(id)arg1;
@property(readonly, nonatomic) CNURLSessionFactory *sessionFactory; // @synthesize sessionFactory=_sessionFactory;
@property(readonly, nonatomic) CNFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (void).cxx_destruct;
- (id)writeData:(id)arg1 toURL:(id)arg2 options:(unsigned int)arg3;
- (id)observableWithContentsOfURL:(id)arg1;
- (id)dataWithContentsOfURL:(id)arg1;
- (id)initWithFileManager:(id)arg1 urlSessionFactory:(id)arg2;
- (id)initWithFileManager:(id)arg1;
- (id)init;

@end
