//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSAccessibilityAXUIElementWrapper : NSObject
{
    struct __AXUIElement *_elementRef;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)accessibilityTopLevelUIElementAttributeValueHelper;
- (id)accessibilityWindowAttributeValueHelper;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (struct __AXUIElement *)AXUIElement;
- (void)dealloc;
- (id)initWithAXUIElement:(struct __AXUIElement *)arg1;

@end
