// Task.m
#import "Task.h"

@implementation Task

- (instancetype)initWithName:(NSString *)name {
    self = [super init];
    if (self) {
        _name = name;
        _completed = NO;
    }
    return self;
}

@end
