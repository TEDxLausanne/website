# TEDxLausanne website

## Compilation Theme

To build and watch your files, make sure you are in the root of the project. Then run the following commands.


```shell
$ npm install
$ bower install

# Build all assets
$ gulp

# On you production environment, you need to run this:
$ gulp clean;
$ gulp vendors;
$ gulp styles --production;
$ gulp scripts;

# Watch files as you go
$ gulp serve
```

# Deploy
We use [Capdrupal](https://github.com/antistatique/capdrupal) for D7 (v0.x) to deploy.

## First time

    $ gem install bundle
    $ bundle install

## Then

    $ bundle exec cap dev deploy